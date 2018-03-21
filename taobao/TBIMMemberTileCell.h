//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, TBIMShadowLine, UILabel;
@protocol TBIMMemberTileCellDelegate;

@interface TBIMMemberTileCell : UITableViewCell
{
    id <TBIMMemberTileCellDelegate> _memberTileViewDelegate;
    UILabel *_topLeftContentLabel;
    UILabel *_topRightContentLabel;
    UILabel *_topRightArrowLabel;
    NSMutableArray *_memberViews;
    UILabel *_addLabel;
    UILabel *_deletedLabel;
    TBIMShadowLine *_shadowLine;
}

+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) TBIMShadowLine *shadowLine; // @synthesize shadowLine=_shadowLine;
@property(retain, nonatomic) UILabel *deletedLabel; // @synthesize deletedLabel=_deletedLabel;
@property(retain, nonatomic) UILabel *addLabel; // @synthesize addLabel=_addLabel;
@property(retain, nonatomic) NSMutableArray *memberViews; // @synthesize memberViews=_memberViews;
@property(retain, nonatomic) UILabel *topRightArrowLabel; // @synthesize topRightArrowLabel=_topRightArrowLabel;
@property(retain, nonatomic) UILabel *topRightContentLabel; // @synthesize topRightContentLabel=_topRightContentLabel;
@property(retain, nonatomic) UILabel *topLeftContentLabel; // @synthesize topLeftContentLabel=_topLeftContentLabel;
@property(nonatomic) __weak id <TBIMMemberTileCellDelegate> memberTileViewDelegate; // @synthesize memberTileViewDelegate=_memberTileViewDelegate;
- (void).cxx_destruct;
- (void)tapMemberViewGesture:(id)arg1;
- (void)tapMoveGesture:(id)arg1;
- (void)tapAddGesture:(id)arg1;
- (void)refreshViewWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 model:(id)arg3 delegate:(id)arg4;

@end

