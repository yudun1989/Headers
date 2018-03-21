//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSRPXSearchTopBarItem.h"

#import "TBSRPXSearchTopBarItemTopBaseButtonDelegate-Protocol.h"
#import "TBSRPXSearchTopBarSubListBaseViewDelegate-Protocol.h"

@class NSArray, NSString, TBSRPXSearchTopBarItemTopBaseButton, TBSRPXSearchTopBarMainModel, TBSRPXSearchTopBarSubListBaseView, UIButton, UIView;
@protocol TBSearchParamModel;

@interface TBSRPXSearchTopBarItemMain : TBSRPXSearchTopBarItem <TBSRPXSearchTopBarSubListBaseViewDelegate, TBSRPXSearchTopBarItemTopBaseButtonDelegate>
{
    _Bool _disableListStyle;
    _Bool _needSetDefaultParams;
    TBSRPXSearchTopBarSubListBaseView *_subListView;
    double _subListLineHeight;
    NSArray<TBSearchParamModel> *_curParams;
    long long _type;
    long long _subListType;
    NSString *_selected;
    NSString *_defaultColor;
    UIButton *_itemView;
    TBSRPXSearchTopBarItemTopBaseButton *_itemTopObj;
    UIView *_maskView;
}

@property(nonatomic) _Bool needSetDefaultParams; // @synthesize needSetDefaultParams=_needSetDefaultParams;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) TBSRPXSearchTopBarItemTopBaseButton *itemTopObj; // @synthesize itemTopObj=_itemTopObj;
@property(retain, nonatomic) UIButton *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) _Bool disableListStyle; // @synthesize disableListStyle=_disableListStyle;
@property(retain, nonatomic) NSString *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(retain, nonatomic) NSString *selected; // @synthesize selected=_selected;
@property(nonatomic) long long subListType; // @synthesize subListType=_subListType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray<TBSearchParamModel> *curParams; // @synthesize curParams=_curParams;
@property(nonatomic) double subListLineHeight; // @synthesize subListLineHeight=_subListLineHeight;
@property(retain, nonatomic) TBSRPXSearchTopBarSubListBaseView *subListView; // @synthesize subListView=_subListView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDropListPos;
- (void)maskCloseFloatingLayer:(id)arg1;
- (void)topBarCloseFloatingLayer;
- (void)topBarSearchWithData:(id)arg1;
- (void)topBarControlSubList:(_Bool)arg1;
- (void)closeFloatingLayer;
- (void)openFloatingLayer;
- (void)loadNTTwoLevelView;
- (void)loadNTTwoColumnView;
- (void)loadNTOneColumnView;
- (void)changeToImmersedStyle:(_Bool)arg1;
- (void)setDefaultParamsToSearchOptionWithData:(id)arg1;
- (id)getSubListData;
- (void)setDefaultParamsToSearchOption;
- (void)refresh;
- (void)clearAll;
- (void)setTheSubListType;
- (void)setTheType;
- (void)processData;
- (id)getInitItemView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) TBSRPXSearchTopBarMainModel *itemModel; // @dynamic itemModel;
@property(readonly) Class superclass;

@end

