//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCOfficialBaseProcessor.h"

#import "MCOfficialBubbleDelegate-Protocol.h"

@class NSString;

@interface MCOfficialAdDataProcessor : MCOfficialBaseProcessor <MCOfficialBubbleDelegate>
{
}

- (void)bubble:(id)arg1 didTapMoreItem:(id)arg2;
- (void)bubble:(id)arg1 longPressWithMessageVO:(id)arg2;
- (void)bubble:(id)arg1 didSelectedMessageVO:(id)arg2;
- (id)getCellByOfficialVO:(id)arg1 tableView:(id)arg2 config:(id)arg3;
- (id)doTransformProcessorData:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

