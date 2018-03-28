//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol WDAdapterMethodDelegate, WDVideoPlayerTransferReceiver, WDVideoPlayerTransferSender;

@interface WDAdapterSetting : NSObject
{
    id <WDAdapterMethodDelegate> _methodDelegate;
    id <WDVideoPlayerTransferSender> _sender;
    id <WDVideoPlayerTransferReceiver> _receiver;
}

+ (void)stopCurrentVideoPlayViewPlaying:(id)arg1;
+ (id)createNewVideoPlayViewWithParams:(id)arg1;
+ (void)removeOtherVideoPlayViews;
+ (id)sharedInstance;
@property(nonatomic) __weak id <WDVideoPlayerTransferReceiver> receiver; // @synthesize receiver=_receiver;
@property(retain, nonatomic) id <WDVideoPlayerTransferSender> sender; // @synthesize sender=_sender;
@property(retain, nonatomic) id <WDAdapterMethodDelegate> methodDelegate; // @synthesize methodDelegate=_methodDelegate;
- (void).cxx_destruct;
- (void)actionChangeCallbackWithAction:(id)arg1;
- (void)playerPlaybackState:(long long)arg1;
- (void)setRepostExtraParams:(id)arg1;
- (void)presentForAtUserListViewControllerWithCurrentViewController:(id)arg1 selectBlock:(CDUnknownBlockType)arg2 dismissBlock:(CDUnknownBlockType)arg3;
- (void)presentRecordImportVideoViewControllerWithExtraTrack:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)commentToolBarEnable;
- (id)commentEnterFromValueForLogV3WithClickLabel:(id)arg1 categoryID:(id)arg2;
- (void)commentViewControllerDidSelectedWithInfo:(id)arg1 viewController:(id)arg2 dismissBlock:(CDUnknownBlockType)arg3;
- (void)showRedPackViewWithRedPackModel:(id)arg1 extraDict:(id)arg2 viewController:(id)arg3;

@end

