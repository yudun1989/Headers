//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableData.h>

@interface NSMutableData (MQTT)
- (void)appendBinaryData:(id)arg1;
- (void)appendMQTTString:(id)arg1;
- (void)appendVariableLength:(unsigned long long)arg1;
- (void)appendUInt32BigEndian:(unsigned int)arg1;
- (void)appendUInt16BigEndian:(unsigned short)arg1;
- (void)appendByte:(unsigned char)arg1;
@end

