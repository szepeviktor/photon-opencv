class Partial_To_Full_Proxy_Encoder : public Encoder {
protected:
  std::shared_ptr<Encoder> _internal_encoder;
  Frame _full_frame;
  Frame _previous;

  void _initialize_full_frame(const Frame &frame);

public:
  Partial_To_Full_Proxy_Encoder(std::shared_ptr<Encoder> internal_encoder);
  bool add_frame(const Frame &frame);
  bool finalize();
  bool supports_multiple_frames();
  bool supports_optimized_frames();
};
