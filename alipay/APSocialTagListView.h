//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "APSocialTagEditorViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class APSocialTagEditorView, APSocialTagView, NSMutableArray, NSString;
@protocol APSocialTagListViewDelegate;

@interface APSocialTagListView : UIScrollView <APSocialTagEditorViewDelegate, UIScrollViewDelegate>
{
    _Bool _listViewEdited;
    float _marginX;
    float _marginY;
    float _lineSpace;
    float _innerSpace;
    double _defaultHeight;
    double _maxHeight;
    id <APSocialTagListViewDelegate> _tagListDelegate;
    long long _tagAlignment;
    APSocialTagEditorView *_tagEditorView;
    CDUnknownBlockType _tapHandler;
    id _tagNotification;
    id _tagEditorChangedNotification;
    id _tagMenuOperationNotification;
    id _tagShouldBeDeletedNotification;
    NSMutableArray *_tagViews;
    APSocialTagView *_lastSelectTagView;
}

@property(retain, nonatomic) APSocialTagView *lastSelectTagView; // @synthesize lastSelectTagView=_lastSelectTagView;
@property(retain, nonatomic) NSMutableArray *tagViews; // @synthesize tagViews=_tagViews;
@property(retain, nonatomic) id tagShouldBeDeletedNotification; // @synthesize tagShouldBeDeletedNotification=_tagShouldBeDeletedNotification;
@property(retain, nonatomic) id tagMenuOperationNotification; // @synthesize tagMenuOperationNotification=_tagMenuOperationNotification;
@property(retain, nonatomic) id tagEditorChangedNotification; // @synthesize tagEditorChangedNotification=_tagEditorChangedNotification;
@property(retain, nonatomic) id tagNotification; // @synthesize tagNotification=_tagNotification;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(retain, nonatomic) APSocialTagEditorView *tagEditorView; // @synthesize tagEditorView=_tagEditorView;
@property(nonatomic) long long tagAlignment; // @synthesize tagAlignment=_tagAlignment;
@property(nonatomic) __weak id <APSocialTagListViewDelegate> tagListDelegate; // @synthesize tagListDelegate=_tagListDelegate;
@property(nonatomic) _Bool listViewEdited; // @synthesize listViewEdited=_listViewEdited;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double defaultHeight; // @synthesize defaultHeight=_defaultHeight;
@property(nonatomic) float innerSpace; // @synthesize innerSpace=_innerSpace;
@property(nonatomic) float lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) float marginY; // @synthesize marginY=_marginY;
@property(nonatomic) float marginX; // @synthesize marginX=_marginX;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)socialTagEditorViewShouldReturn:(id)arg1;
- (void)menuDidHide:(id)arg1;
- (void)tapTagListViewBackground:(id)arg1;
- (void)saveSocialTagWhenEditState;
- (void)deleteSocialTagView:(id)arg1;
- (id)isTagAlreadStored:(id)arg1;
- (void)addNewSocialTag:(id)arg1;
- (id)filterText:(id)arg1;
- (void)shouldDeleteTagViewIfNeed:(id)arg1;
- (id)findSocialTagViewStateDelete;
- (void)resetSocialTagViews;
- (void)changeCurrentTagViewState:(long long)arg1 socialTagView:(id)arg2;
- (void)handleSoialTagViewMenuType:(long long)arg1 socialTagView:(id)arg2;
- (void)showMenuInSocialTagView:(id)arg1;
- (void)adjustEditorViewPositionAnimation:(_Bool)arg1;
- (void)addTag:(id)arg1 rearrange:(_Bool)arg2 userInfo:(id)arg3;
- (void)addRecognizers;
- (void)setup;
- (void)commonInit;
- (void)setInputStateWillDelete;
- (void)scrollToBottomAnimation:(_Bool)arg1;
- (void)reloadUI;
- (void)rearrangeTags;
- (void)removeAllTags;
- (void)removeTagView:(id)arg1;
- (void)removeTag:(id)arg1;
- (void)addTagView:(id)arg1 rearrange:(_Bool)arg2;
- (void)addTagView:(id)arg1;
- (void)addTags:(id)arg1 rearrange:(_Bool)arg2;
- (void)addTags:(id)arg1;
- (void)addTag:(id)arg1 rearrange:(_Bool)arg2;
- (void)addTag:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

