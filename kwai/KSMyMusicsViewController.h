//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSSubMusicListViewController.h"

#import "KSMusicStateChangeSubscriber-Protocol.h"

@class KSMyMusics, NSString;

@interface KSMyMusicsViewController : KSSubMusicListViewController <KSMusicStateChangeSubscriber>
{
    KSMyMusics *_myMusics;
}

@property(readonly, nonatomic) KSMyMusics *myMusics; // @synthesize myMusics=_myMusics;
- (void).cxx_destruct;
- (void)musicStateChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateEmptyMessageView;
- (void)modelDidFinishLoad:(id)arg1;
- (void)modelWillFinishLoad:(id)arg1;
- (id)_indexPathForView:(id)arg1;
- (void)retryButtonWasTapped:(id)arg1;
- (void)deleteButtonWasTapped:(id)arg1;
- (void)_updateArtistNameForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateMusicNameForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateErrorForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateProgressForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)cellWithListObject:(id)arg1 atIndexPath:(id)arg2;
- (id)createModel;
- (void)_removeObservers;
- (void)_registerObservers;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMyMusics:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

