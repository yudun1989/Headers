//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, TTChatroomMoviePlayerController;

@protocol TTChatroomMoviePlayerControllerDelegate <NSObject>
@property(nonatomic) _Bool isFullScreenButtonAction;
- (_Bool)stopIsValid;
- (_Bool)shouldResumePlayWhenInterruptionEnd;
- (NSString *)currentCDNHost;
- (void)movieController:(TTChatroomMoviePlayerController *)arg1 ResolutionButtonClickedWithType:(unsigned long long)arg2 typeString:(NSString *)arg3;
- (NSArray *)supportedResolutionTypes;
- (void)movieControllerControlViewDidAppear;
- (_Bool)movieControllerShouldPauseWhenEnterForeground:(TTChatroomMoviePlayerController *)arg1;
- (void)movieControllerLandscapeLeftRightRotate:(TTChatroomMoviePlayerController *)arg1;
- (_Bool)movieControllerCanRotate:(TTChatroomMoviePlayerController *)arg1;
- (void)movieControlViewRetryButtonClicked:(TTChatroomMoviePlayerController *)arg1;
- (_Bool)movieControllerFullScreenButtonClicked:(TTChatroomMoviePlayerController *)arg1 isFullScreen:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)movieControllerShareButtonClicked:(TTChatroomMoviePlayerController *)arg1;
- (void)movieControllerPlayButtonClicked:(TTChatroomMoviePlayerController *)arg1 replay:(_Bool)arg2;
@end

