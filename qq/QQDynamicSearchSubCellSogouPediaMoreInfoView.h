//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQDynamicSearchResultSubItemModel, UIImageView, UILabel;

@interface QQDynamicSearchSubCellSogouPediaMoreInfoView : UIView
{
    UILabel *_title;
    UIImageView *_moreImageView;
    QQDynamicSearchResultSubItemModel *_model;
}

@property(retain, nonatomic) QQDynamicSearchResultSubItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layoutViews;
- (void)setDatasourceAndUpdateAppearance:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
