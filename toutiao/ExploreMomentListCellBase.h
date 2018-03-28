//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class ArticleMomentModel;
@protocol ExploreMomentListCellBaseDelegate;

@interface ExploreMomentListCellBase : SSThemedTableViewCell
{
    ArticleMomentModel *_momentModel;
    unsigned long long _sourceType;
    id <ExploreMomentListCellBaseDelegate> _delegate;
}

+ (double)heightForModel:(id)arg1 cellWidth:(double)arg2 sourceType:(unsigned long long)arg3;
@property(nonatomic) __weak id <ExploreMomentListCellBaseDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) ArticleMomentModel *momentModel; // @synthesize momentModel=_momentModel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)currentModel;
- (void)refreshWithModel:(id)arg1 indexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

