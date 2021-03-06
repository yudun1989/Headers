//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSMutableArray, TTAlphaThemedButton, WDListViewModel;

@interface WDWendaListTabView : SSThemedView
{
    WDListViewModel *_listViewModel;
    TTAlphaThemedButton *_sendBtn;
    SSThemedView *_line;
    NSMutableArray *_buttonList;
}

@property(retain, nonatomic) NSMutableArray *buttonList; // @synthesize buttonList=_buttonList;
@property(retain, nonatomic) SSThemedView *line; // @synthesize line=_line;
@property(retain, nonatomic) TTAlphaThemedButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) WDListViewModel *listViewModel; // @synthesize listViewModel=_listViewModel;
- (void).cxx_destruct;
- (void)sendTrackForBtn:(id)arg1;
- (void)refresh;
- (void)themeChanged:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end

