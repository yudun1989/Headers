//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol ArtisticFilterScrollViewDelegate, ArtisticFilterScrollViewRequestDelegate;

@interface ArtisticFilterScrollView : UIScrollView
{
    id <ArtisticFilterScrollViewRequestDelegate> _delegaterequest;
    UIScrollView *_artisticFilterPickView;
}

@property(retain, nonatomic) UIScrollView *artisticFilterPickView; // @synthesize artisticFilterPickView=_artisticFilterPickView;
@property(retain, nonatomic) id <ArtisticFilterScrollViewRequestDelegate> delegaterequest; // @synthesize delegaterequest=_delegaterequest;
- (void).cxx_destruct;
- (void)artisticFilterPressedIndex:(long long)arg1;
- (void)initArtisticFIlterPressedIndex:(long long)arg1;
- (void)onStickerButtonPressed:(id)arg1;
- (id)artisticFilterPickViewWithView:(struct CGRect)arg1 data:(id)arg2;
- (void)initArtisticFilterView:(struct CGRect)arg1 data:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 data:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <ArtisticFilterScrollViewDelegate> delegate;

@end

