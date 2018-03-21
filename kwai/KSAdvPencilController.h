//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSAdvActionController.h"

@class KSAdvPencilItem, KSAdvPencilToolViewController, KSPainterBrush;

@interface KSAdvPencilController : KSAdvActionController
{
    KSAdvPencilToolViewController *_pencilToolViewController;
    KSPainterBrush *_brush;
    KSAdvPencilItem *_cachedPencilItem;
}

@property(retain, nonatomic) KSAdvPencilItem *cachedPencilItem; // @synthesize cachedPencilItem=_cachedPencilItem;
@property(retain, nonatomic) KSPainterBrush *brush; // @synthesize brush=_brush;
@property(retain, nonatomic) KSAdvPencilToolViewController *pencilToolViewController; // @synthesize pencilToolViewController=_pencilToolViewController;
- (void).cxx_destruct;
- (id)_pencilMediaProject;
- (id)currentPencilItem;
- (_Bool)hasOtherTexturesAbove;
- (id)createPencilLayerWithPencilItem:(id)arg1;
- (void)usePreparedPencilItem:(id)arg1;
- (void)preparePencilItem;
- (void)undo;
- (void)tapEraser;
- (void)changeLineWidth:(double)arg1;
- (void)selectColor:(id)arg1 index:(long long)arg2;
- (void)timeLineViewController:(id)arg1 didUpdateItemAtIndex:(unsigned long long)arg2;
- (_Bool)timeLineViewController:(id)arg1 shouldEditItemAtIndex:(unsigned long long)arg2;
- (id)createAdditionalAdapters;
- (void)endEdit;
- (void)startEdit;
- (void)configTabBarItem:(id)arg1;
- (id)init;

@end

