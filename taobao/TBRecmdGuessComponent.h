//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

@class TBRecmdEngine;

@interface TBRecmdGuessComponent : WXComponent
{
    _Bool _show;
    TBRecmdEngine *_recmdEngine;
}

@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(retain, nonatomic) TBRecmdEngine *recmdEngine; // @synthesize recmdEngine=_recmdEngine;
- (void).cxx_destruct;
- (id)recmdCollectionView;
- (void)queryRecmdWithParam:(id)arg1;
- (void)registRecmdEngine;
- (void)reloadRecmdView:(_Bool)arg1;
- (void)updateAttributes:(id)arg1;
- (void)layoutDidFinish;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

