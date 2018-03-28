//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSMutableArray, NSString;

@interface ExploreMixedListSuggestionWordsView : SSThemedView
{
    NSString *_categoryID;
    NSMutableArray *_words;
    NSMutableArray *_oldWords;
    NSMutableArray *_showWords;
    NSMutableArray *_oldButtons;
    NSMutableArray *_showButtons;
    NSMutableArray *_dataList;
}

@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) NSMutableArray *showButtons; // @synthesize showButtons=_showButtons;
@property(retain, nonatomic) NSMutableArray *oldButtons; // @synthesize oldButtons=_oldButtons;
@property(retain, nonatomic) NSMutableArray *showWords; // @synthesize showWords=_showWords;
@property(retain, nonatomic) NSMutableArray *oldWords; // @synthesize oldWords=_oldWords;
@property(retain, nonatomic) NSMutableArray *words; // @synthesize words=_words;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
- (void).cxx_destruct;
- (void)didClick:(id)arg1;
- (void)refreshWithData:(id)arg1 animated:(_Bool)arg2 superviewIsShowing:(_Bool)arg3;
- (void)loadData;
- (id)initWithFrame:(struct CGRect)arg1;

@end

