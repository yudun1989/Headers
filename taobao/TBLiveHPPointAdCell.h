//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveTableViewCell.h"

@class TBLiveCPPointAdGroupModel, TBLiveHPColumnCardHeaderView, UIImageView, UIView;

@interface TBLiveHPPointAdCell : TBLiveTableViewCell
{
    UIView *_cellView;
    TBLiveHPColumnCardHeaderView *_headerView;
    UIImageView *_pgcImageView;
    TBLiveCPPointAdGroupModel *_pointAdModel;
}

+ (struct CGSize)viewSizeWithModel:(id)arg1;
@property(retain, nonatomic) TBLiveCPPointAdGroupModel *pointAdModel; // @synthesize pointAdModel=_pointAdModel;
@property(retain, nonatomic) UIImageView *pgcImageView; // @synthesize pgcImageView=_pgcImageView;
@property(retain, nonatomic) TBLiveHPColumnCardHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *cellView; // @synthesize cellView=_cellView;
- (void).cxx_destruct;
- (void)didTapView;
- (void)refreshWithModel:(id)arg1;
- (void)setupSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

