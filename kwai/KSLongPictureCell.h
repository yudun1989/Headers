//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KSInvocationBroadcastGroup, KSPictureOperationSwitchableContext, KSPreviewEffectSwitchableControl;

@interface KSLongPictureCell : UITableViewCell
{
    CDUnknownBlockType _onEffectChanged;
    KSPreviewEffectSwitchableControl *_control;
    KSInvocationBroadcastGroup *_controlGroup;
    KSInvocationBroadcastGroup *_contextGroup;
    KSPictureOperationSwitchableContext *_context;
}

@property(retain, nonatomic) KSPictureOperationSwitchableContext *context; // @synthesize context=_context;
@property(nonatomic) __weak KSInvocationBroadcastGroup *contextGroup; // @synthesize contextGroup=_contextGroup;
@property(nonatomic) __weak KSInvocationBroadcastGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
@property(retain, nonatomic) KSPreviewEffectSwitchableControl *control; // @synthesize control=_control;
@property(copy, nonatomic) CDUnknownBlockType onEffectChanged; // @synthesize onEffectChanged=_onEffectChanged;
- (void).cxx_destruct;
- (void)updateSwipable;
- (void)configWithContext:(id)arg1 controlGroup:(id)arg2 contextGroup:(id)arg3 size:(struct CGSize)arg4 titleContainerView:(id)arg5;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

