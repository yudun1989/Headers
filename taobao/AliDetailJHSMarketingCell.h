//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AliDetailJHSMarketingItemModel, NSString, TBSDKMTOPServer, UIButton, UILabel;

@interface AliDetailJHSMarketingCell : UITableViewCell
{
    _Bool _canSelect;
    AliDetailJHSMarketingItemModel *_itemModel;
    NSString *_eventToken;
    UILabel *_descLabel;
    UILabel *_typeLabel;
    UILabel *_taskDescLabel;
    UILabel *_extendDescLabel;
    UIButton *_actionBtn;
    TBSDKMTOPServer *_mtopServer;
    CDUnknownBlockType _actionAfterBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionAfterBlock; // @synthesize actionAfterBlock=_actionAfterBlock;
@property(retain, nonatomic) TBSDKMTOPServer *mtopServer; // @synthesize mtopServer=_mtopServer;
@property(nonatomic) _Bool canSelect; // @synthesize canSelect=_canSelect;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *extendDescLabel; // @synthesize extendDescLabel=_extendDescLabel;
@property(retain, nonatomic) UILabel *taskDescLabel; // @synthesize taskDescLabel=_taskDescLabel;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(retain, nonatomic) AliDetailJHSMarketingItemModel *itemModel; // @synthesize itemModel=_itemModel;
- (void).cxx_destruct;
- (struct CGSize)autoSizeOfLabel:(id)arg1 maxRect:(struct CGSize)arg2;
- (void)buttonAction;
- (void)actionBtnAction:(id)arg1;
- (void)setMarketingModel:(id)arg1;
- (void)resizeSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

