//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel;

@interface TBTaoPasswordScreenshotsShowAppsView : UIView
{
    UILabel *_titleLable;
    UILabel *_subTitleLabel;
    NSMutableArray *_appViews;
}

+ (id)taoPasswordScreenshotsShowAppsViewWithTitle:(id)arg1 subTitle:(id)arg2 containerSize:(struct CGSize *)arg3 clickAppBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSMutableArray *appViews; // @synthesize appViews=_appViews;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
- (void).cxx_destruct;
- (long long)appsNumber;
- (id)initWithContainerSize:(struct CGSize *)arg1 subTitle:(id)arg2 title:(id)arg3 clickAppBlock:(CDUnknownBlockType)arg4;

@end

