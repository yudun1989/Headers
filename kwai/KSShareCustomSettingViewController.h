//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseSettingViewController.h"

#import "KSMerchantWebViewControllerDelegate-Protocol.h"

@class KSSettingItem, NSString;
@protocol KSShareCustomSettingViewControllerDelegate;

@interface KSShareCustomSettingViewController : KSBaseSettingViewController <KSMerchantWebViewControllerDelegate>
{
    _Bool _disableNearbyShow;
    id <KSShareCustomSettingViewControllerDelegate> _delegate;
    long long _recoGenderFirst;
    NSString *_merchantName;
    NSString *_merchantInfo;
    KSSettingItem *_blankHeaderItem;
    KSSettingItem *_recoGenderItem;
    KSSettingItem *_nearbyItem;
    KSSettingItem *_merchantItem;
}

@property(retain, nonatomic) KSSettingItem *merchantItem; // @synthesize merchantItem=_merchantItem;
@property(retain, nonatomic) KSSettingItem *nearbyItem; // @synthesize nearbyItem=_nearbyItem;
@property(retain, nonatomic) KSSettingItem *recoGenderItem; // @synthesize recoGenderItem=_recoGenderItem;
@property(retain, nonatomic) KSSettingItem *blankHeaderItem; // @synthesize blankHeaderItem=_blankHeaderItem;
@property(retain, nonatomic) NSString *merchantInfo; // @synthesize merchantInfo=_merchantInfo;
@property(retain, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
@property(nonatomic) _Bool disableNearbyShow; // @synthesize disableNearbyShow=_disableNearbyShow;
@property(nonatomic) long long recoGenderFirst; // @synthesize recoGenderFirst=_recoGenderFirst;
@property(nonatomic) __weak id <KSShareCustomSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)ks_shouldHandleBackPanGestureRecognizer:(id)arg1;
- (void)didTapBackNagigationButton:(id)arg1;
- (void)updateMerchantItem;
- (void)didSelectItem:(id)arg1 itemName:(id)arg2;
- (_Bool)snapshotNavigationBarWhenDisappear;
- (void)configItems;
- (void)viewWillAppear:(_Bool)arg1;
- (id)ksuShowMetaData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

