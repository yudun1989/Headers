//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface TCSignalChannelHelper : NSObject
{
    NSData *_data;
    NSString *_serviceCmd;
    int _seq;
    _Bool _immediately;
    int _timeOut;
    BOOL _answerFlag;
    int _xo;
}

+ (id)helperWithData:(id)arg1 cmd:(id)arg2;
+ (id)helperWithData:(id)arg1 cmd:(id)arg2 immediately:(_Bool)arg3 timeOut:(int)arg4 answerFlag:(BOOL)arg5;
- (_Bool)sendData:(id)arg1 withCmd:(id)arg2 uin:(id)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6;
- (_Bool)sendWithUinWithNullkey:(id)arg1 signalChannelService:(id)arg2;
- (_Bool)sendWithUin:(id)arg1;
- (_Bool)sendData:(id)arg1 withCmd:(id)arg2 immediately:(_Bool)arg3 timeOut:(int)arg4 answerFlag:(BOOL)arg5;
- (_Bool)send;
- (id)initWithData:(id)arg1 cmd:(id)arg2 immediately:(_Bool)arg3 timeOut:(int)arg4 answerFlag:(BOOL)arg5;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(nonatomic) BOOL answerFlag; // @dynamic answerFlag;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) _Bool immediately; // @dynamic immediately;
@property(readonly, nonatomic) int seq; // @dynamic seq;
@property(retain, nonatomic) NSString *serviceCmd; // @dynamic serviceCmd;
@property(nonatomic) int timeOut; // @dynamic timeOut;

@end

