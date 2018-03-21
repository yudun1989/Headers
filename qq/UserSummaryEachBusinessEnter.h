//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/UserSummaryBaseCell.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSArray, NSOperationQueue, NSString, UIColor, UITableView, UIView, UserSummaryHobbiesTableSectionHeaderFooter;
@protocol UserSummaryEachBusinessEnterDelegate;

@interface UserSummaryEachBusinessEnter : UserSummaryBaseCell <UITableViewDataSource, UITableViewDelegate>
{
    id <UserSummaryEachBusinessEnterDelegate> _delegate;
    UIView *_viewableArea;
    UITableView *_contentArea;
    NSArray *_tableDataArray;
    UIColor *_nameLabelColor;
    UIColor *_describeLabelColor;
    NSOperationQueue *_operationQueue;
    _Bool _shouldShowTitle;
    UserSummaryHobbiesTableSectionHeaderFooter *_titleView;
    CDUnknownBlockType _onClickItemAtIndex;
}

+ (double)cellHeight:(_Bool)arg1;
@property(copy, nonatomic) CDUnknownBlockType onClickItemAtIndex; // @synthesize onClickItemAtIndex=_onClickItemAtIndex;
@property(nonatomic) _Bool shouldShowTitle; // @synthesize shouldShowTitle=_shouldShowTitle;
@property(retain, nonatomic) UserSummaryHobbiesTableSectionHeaderFooter *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *describeLabelColor; // @dynamic describeLabelColor;
@property(retain, nonatomic) UIColor *nameLabelColor; // @dynamic nameLabelColor;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshImage;
- (_Bool)contentBeyondScreen;
- (void)onClickBtn:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)setBusinessData:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGRect)contentAreaScrollRect;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UITableView *contentArea; // @dynamic contentArea;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <UserSummaryEachBusinessEnterDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSArray *tableDataArray; // @dynamic tableDataArray;
@property(retain, nonatomic) UIView *viewableArea; // @dynamic viewableArea;

@end

