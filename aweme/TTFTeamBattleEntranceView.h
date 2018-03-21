//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTFPopCardBaseView.h"

@class NSMutableArray, UIButton;
@protocol TTFTeamBattleEntranceDelegate;

@interface TTFTeamBattleEntranceView : TTFPopCardBaseView
{
    id <TTFTeamBattleEntranceDelegate> _delegate;
    NSMutableArray *_paragraphLabels;
    UIButton *_createButton;
    UIButton *_joinByScanButton;
    UIButton *_joinByCodeButton;
}

@property(retain, nonatomic) UIButton *joinByCodeButton; // @synthesize joinByCodeButton=_joinByCodeButton;
@property(retain, nonatomic) UIButton *joinByScanButton; // @synthesize joinByScanButton=_joinByScanButton;
@property(retain, nonatomic) UIButton *createButton; // @synthesize createButton=_createButton;
@property(retain, nonatomic) NSMutableArray *paragraphLabels; // @synthesize paragraphLabels=_paragraphLabels;
@property(nonatomic) __weak id <TTFTeamBattleEntranceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)paragraphColors;
- (void)didClickButton:(id)arg1;
- (void)showInView:(id)arg1 withTeamBonus:(long long)arg2;
- (void)initUIComponent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

