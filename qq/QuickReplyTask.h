//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/ArkHTTPSessionTaskDelegate-Protocol.h>
#import <QQMainProject/NSURLSessionDataDelegate-Protocol.h>
#import <QQMainProject/NSURLSessionTaskDelegate-Protocol.h>

@class NSData, NSString, NSTimer;
@protocol QuickReplyTaskDelegate;

@interface QuickReplyTask : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegate, ArkHTTPSessionTaskDelegate>
{
    NSString *_cmdStr;
    int _seq;
    NSData *_wupBuffer;
    id <QuickReplyTaskDelegate> _delegate;
    NSData *_postBody;
    NSString *_customUrl;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSString *customUrl; // @synthesize customUrl=_customUrl;
@property(nonatomic) int reqId; // @synthesize reqId=_seq;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (_Bool)decodeResponseData:(id)arg1 dic:(id *)arg2;
- (_Bool)isSupportATS;
- (_Bool)isSupportArkHttp;
- (void)onArkTimeout:(id)arg1;
- (int)sendPacket;
- (void)setDelegate:(id)arg1;
- (_Bool)packPostBody;
- (_Bool)setBuffer:(id)arg1 cmd:(id)arg2;
- (void)dealloc;
- (id)initWithDelgate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

