//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSAtlasEditBaseViewModel-Protocol.h"

@class BFCancellationTokenSource, BFTask, NSString, UIImage;
@protocol KSAtlasEditAssetElement, KSAtlasEditFilteredAtlasDataSource;

@interface KSAtlasEditCollectionAtlasPageContentViewModel : NSObject <KSAtlasEditBaseViewModel>
{
    _Bool _active;
    NSObject<KSAtlasEditFilteredAtlasDataSource> *_dataSource;
    id <KSAtlasEditAssetElement> _element;
    long long _index;
    UIImage *_contentImage;
    BFCancellationTokenSource *_cts;
    NSString *_observerID;
    BFTask *_currentTask;
}

@property(retain, nonatomic) BFTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) NSString *observerID; // @synthesize observerID=_observerID;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) BFCancellationTokenSource *cts; // @synthesize cts=_cts;
@property(retain, nonatomic) UIImage *contentImage; // @synthesize contentImage=_contentImage;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) id <KSAtlasEditAssetElement> element; // @synthesize element=_element;
@property(readonly, nonatomic) NSObject<KSAtlasEditFilteredAtlasDataSource> *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)inactivate;
- (void)_requestImge;
- (void)activate;
- (id)initWithDataSource:(id)arg1 element:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

