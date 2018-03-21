//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "XSearchFooterCell-Protocol.h"

@class NSIndexPath, NSString, XSearchContext, XSearchService;

@interface XSearchFooterCell : UICollectionReusableView <XSearchFooterCell>
{
    NSIndexPath *_indexPath;
    long long _layoutStyle;
    id _model;
    XSearchService *_searchService;
    XSearchContext *_searchContext;
    id _delegate;
    id _vcdelegate;
    id _bizVCDelegate;
}

+ (double)HeightWithModel:(id)arg1 searchService:(id)arg2 layoutStyle:(long long)arg3;
+ (id)reuseIdentifierString;
@property(nonatomic) __weak id bizVCDelegate; // @synthesize bizVCDelegate=_bizVCDelegate;
@property(nonatomic) __weak id vcdelegate; // @synthesize vcdelegate=_vcdelegate;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak XSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(nonatomic) __weak XSearchService *searchService; // @synthesize searchService=_searchService;
@property(retain, nonatomic) id model; // @synthesize model=_model;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)render;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

