//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSError, QQSendWormhole, QQWormholeEndpointInfo, QQWormholeMessage;

@protocol QQSendWormholeDelegate
- (void)wormhole:(QQSendWormhole *)arg1 sendFileMessage:(QQWormholeMessage *)arg2 toEndPoint:(QQWormholeEndpointInfo *)arg3 currentSize:(unsigned long long)arg4 totalSize:(unsigned long long)arg5 progress:(double)arg6;
- (void)wormhole:(QQSendWormhole *)arg1 beginSendFileMessage:(QQWormholeMessage *)arg2 toEndPoint:(QQWormholeEndpointInfo *)arg3;
- (void)wormhole:(QQSendWormhole *)arg1 completeSendMessage:(QQWormholeMessage *)arg2 toEndPoint:(QQWormholeEndpointInfo *)arg3 response:(NSData *)arg4 error:(NSError *)arg5;

@optional
- (void)didFinishEventsForBackgroundWormhole:(QQSendWormhole *)arg1 message:(QQWormholeMessage *)arg2;
@end

