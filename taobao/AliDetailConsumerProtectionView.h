//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, TBSDKMTOPServer, UIButton, UIScrollView;
@protocol AliDetailConsumerProtectionItemModel, AliDetailLoadingStatusViewProtocol;

@interface AliDetailConsumerProtectionView : UIView
{
    UIButton *_closeButton;
    UIScrollView *_myscrollView;
    _Bool _openGradient;
    _Bool _forceToUpdate;
    NSString *_serviceIds;
    NSArray<AliDetailConsumerProtectionItemModel> *_preloadItems;
    CDUnknownBlockType _quitBlock;
    id <AliDetailLoadingStatusViewProtocol> _loadingStatusViewImpl;
    NSString *_itemId;
    NSString *_eventToken;
    TBSDKMTOPServer *_mtopServer;
    NSArray *_dataArray;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) TBSDKMTOPServer *mtopServer; // @synthesize mtopServer=_mtopServer;
@property(nonatomic) _Bool forceToUpdate; // @synthesize forceToUpdate=_forceToUpdate;
@property(nonatomic) _Bool openGradient; // @synthesize openGradient=_openGradient;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) id <AliDetailLoadingStatusViewProtocol> loadingStatusViewImpl; // @synthesize loadingStatusViewImpl=_loadingStatusViewImpl;
@property(copy, nonatomic) CDUnknownBlockType quitBlock; // @synthesize quitBlock=_quitBlock;
@property(retain, nonatomic) NSArray<AliDetailConsumerProtectionItemModel> *preloadItems; // @synthesize preloadItems=_preloadItems;
@property(retain, nonatomic) NSString *serviceIds; // @synthesize serviceIds=_serviceIds;
- (void).cxx_destruct;
- (void)doLimitFlow;
- (void)updateLoadingStatus;
- (void)reloadData;
- (void)beginRequest;
- (void)closeProtectionView;
- (void)setCloseButtonHidden:(_Bool)arg1;
- (void)_initSubViews;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

