//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class NSString, TBLifeCircleSubMenuHeaderView;

@interface TBLifeCircleChatSubMenuTableView : UITableView
{
    NSString *_subTableTitle;
    CDUnknownBlockType _onClickedBlock;
    TBLifeCircleSubMenuHeaderView *_headerView;
}

@property(retain, nonatomic) TBLifeCircleSubMenuHeaderView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType onClickedBlock; // @synthesize onClickedBlock=_onClickedBlock;
@property(retain, nonatomic) NSString *subTableTitle; // @synthesize subTableTitle=_subTableTitle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
