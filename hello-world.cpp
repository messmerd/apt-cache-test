#include <iostream>
#include <alsa/asoundlib.h>

int main()
{
	std::cout << "Hello, World!\n";

	auto format = SND_PCM_FORMAT_UNKNOWN;
	size_t samples = 0;

	snd_pcm_format_size(format, samples);
}
