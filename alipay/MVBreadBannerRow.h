//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MVTableRow.h"

@class MVBannerModel;

@interface MVBreadBannerRow : MVTableRow
{
    CDUnknownBlockType _selectBlock;
    MVBannerModel *_breadModel;
}

@property(retain, nonatomic) MVBannerModel *breadModel; // @synthesize breadModel=_breadModel;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
- (void).cxx_destruct;
- (void)didTap:(id)arg1;
- (void)updateCell:(id)arg1 indexPath:(id)arg2;
- (id)cellForTableView:(id)arg1 indexPath:(id)arg2;
- (double)cellHeight;

@end

