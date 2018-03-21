//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@interface ZZAESDecryptInputStream : NSInputStream
{
    NSInputStream *_upstream;
    unsigned int _counterNonce[4];
    unsigned char _keystream[16];
    unsigned long long _keystreamPos;
    struct _CCCryptor *_aes;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (id)streamError;
- (unsigned long long)streamStatus;
- (id)initWithStream:(id)arg1 password:(id)arg2 header:(char *)arg3 strength:(unsigned char)arg4 error:(out id *)arg5;

@end

