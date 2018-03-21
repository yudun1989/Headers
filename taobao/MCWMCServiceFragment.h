//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCWMCBaseFragment.h"

#import "MCFloatChatFragmentDelegate-Protocol.h"
#import "MCOfficialConentDelegate-Protocol.h"
#import "TBMCBasePresenteDelegate-Protocol.h"

@class MCFloatChatFragment, MCWMCBrandFragmentTemplate, MCWMCHeaderComponent, MCWMCServiceMenuComponent, NSString, UIControl;

@interface MCWMCServiceFragment : MCWMCBaseFragment <TBMCBasePresenteDelegate, MCFloatChatFragmentDelegate, MCOfficialConentDelegate>
{
    MCWMCServiceMenuComponent *_menuComponent;
    MCFloatChatFragment *_floatChatFragment;
    UIControl *_floatMaskView;
    MCWMCHeaderComponent *_headerComponent;
    MCWMCBrandFragmentTemplate *_brandTemplate;
    NSString *_bizCode;
}

@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(nonatomic) __weak MCWMCBrandFragmentTemplate *brandTemplate; // @synthesize brandTemplate=_brandTemplate;
@property(retain, nonatomic) MCWMCHeaderComponent *headerComponent; // @synthesize headerComponent=_headerComponent;
@property(retain, nonatomic) UIControl *floatMaskView; // @synthesize floatMaskView=_floatMaskView;
@property(retain, nonatomic) MCFloatChatFragment *floatChatFragment; // @synthesize floatChatFragment=_floatChatFragment;
@property(retain, nonatomic) MCWMCServiceMenuComponent *menuComponent; // @synthesize menuComponent=_menuComponent;
- (void).cxx_destruct;
- (void)receivePushMessage:(id)arg1;
- (void)loadDataAndRefreshUI;
- (id)getConponetViews;
- (void)closeFloatComponent;
- (void)showFloatComponent;
- (void)floatChatFragmentClose:(id)arg1;
- (void)onPresenterEvent:(id)arg1 eventKey:(id)arg2 params:(id)arg3;
- (void)officialAccountInfoUpdate:(id)arg1;
- (void)viewWillDisAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initHeaderBar;
- (void)initTemplate;
- (id)initWithFrame:(struct CGRect)arg1 bizKey:(id)arg2 officialID:(id)arg3 baseVC:(id)arg4 pageName:(id)arg5 config:(id)arg6 context:(id)arg7 isHistoryMessage:(_Bool)arg8 brandhub_sm:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

