//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class MCNearbyServiceBrowser, MCPeerID, NSDictionary, NSError;

@protocol MCNearbyServiceBrowserDelegate <NSObject>
- (void)browser:(MCNearbyServiceBrowser *)arg1 lostPeer:(MCPeerID *)arg2;
- (void)browser:(MCNearbyServiceBrowser *)arg1 foundPeer:(MCPeerID *)arg2 withDiscoveryInfo:(NSDictionary *)arg3;

@optional
- (void)browser:(MCNearbyServiceBrowser *)arg1 didNotStartBrowsingForPeers:(NSError *)arg2;
@end

