//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface PersonalCenterInfoCell : UITableViewCell
{
    UILabel *leftLbl;
    UILabel *rightLbl;
    UILabel *label;
    UILabel *_leftTopLbl;
    UILabel *_midTopLbl;
    UILabel *_rightTopLbl;
    UIView *_noServerceView;
    UILabel *_buttomLineLabel;
    double _tansitionWidth;
}

@property(nonatomic) double tansitionWidth; // @synthesize tansitionWidth=_tansitionWidth;
@property(retain, nonatomic) UILabel *buttomLineLabel; // @synthesize buttomLineLabel=_buttomLineLabel;
@property(retain, nonatomic) UIView *noServerceView; // @synthesize noServerceView=_noServerceView;
@property(retain, nonatomic) UILabel *rightTopLbl; // @synthesize rightTopLbl=_rightTopLbl;
@property(retain, nonatomic) UILabel *midTopLbl; // @synthesize midTopLbl=_midTopLbl;
@property(retain, nonatomic) UILabel *leftTopLbl; // @synthesize leftTopLbl=_leftTopLbl;
- (void).cxx_destruct;
- (void)dealloc;
- (id)animationProperty;
- (void)setupViewCell;
- (void)updateInfoWithNetErr:(id)arg1;
- (void)updateNoServerceView;
- (void)updateInfo:(id)arg1;
- (double)getTansitionWidth;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

