//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSSlideFeedMetaView;

@protocol KSSlideFeedMetaViewDelegate <NSObject>

@optional
- (void)metaViewDidTapFollowButton:(KSSlideFeedMetaView *)arg1;
- (void)metaViewDidTapAvatarInfo:(KSSlideFeedMetaView *)arg1;
- (void)receiveLikesButtonDidTap:(KSSlideFeedMetaView *)arg1;
- (void)metaViewDidTap:(KSSlideFeedMetaView *)arg1 withFold:(_Bool)arg2;
@end

