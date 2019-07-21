//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCComposerViewOwner-Protocol.h"
#import "SCMapModalViewControllerSubclass-Protocol.h"
#import "SCMapPassportBaseDataStoreListener-Protocol.h"
#import "SCMapPassportCitiesActionHandlerDelegate-Protocol.h"
#import "SCMapPassportCitiesContext-Protocol.h"

@class NSString, SCMapModalViewController, SCMapPassportCitiesDataStore, SCMapPassportCitiesView;
@protocol SCMapPassportCitiesActions, SCXBitmojiAvatarGeneratorProtocol;

@interface SCMapPassportCitiesViewController : UIViewController <SCComposerViewOwner, SCMapPassportCitiesActionHandlerDelegate, SCMapPassportCitiesContext, SCMapPassportBaseDataStoreListener, SCMapModalViewControllerSubclass>
{
    SCMapPassportCitiesDataStore *_citiesDataStore;
    SCMapPassportCitiesView *_citiesView;
    id <SCXBitmojiAvatarGeneratorProtocol> _bitmojiAvatarGenerator;
    NSString *_bitmojiAvatarId;
    long long _sourcePageType;
    id <SCMapPassportCitiesActions> _actions;
}

- (void).cxx_destruct;
- (void)_updateViewModel;
@property(retain, nonatomic) id <SCMapPassportCitiesActions> actions; // @synthesize actions=_actions;
- (id)composerWillCreateViewForClass:(Class)arg1 nodeId:(id)arg2;
- (id)initWithPassportDataStore:(id)arg1 citiesDataStore:(id)arg2 bitmojiAvatarGenerator:(id)arg3 bitmojiAvatarId:(id)arg4 contextSessionProvider:(id)arg5 sourcePageType:(long long)arg6;
- (void)mapPassportBaseDataDidGoIntoDirtyState:(id)arg1;
- (void)mapPassportBaseDataStoreDidUpdate:(id)arg1;
- (void)mapPassportCitiesActionHandler:(id)arg1 didScrollWithOffset:(double)arg2;
- (void)mapPassportCitiesActionHandler:(id)arg1 wantsToPresentViewController:(id)arg2;
- (void)mapPassportCitiesActionHandlerDidTapBack:(id)arg1;
- (_Bool)modalViewController:(id)arg1 panGestureRecognizer:(id)arg2 shouldBeginInView:(id)arg3;
- (id)toJavaScript;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak SCMapModalViewController *parentModalViewController;
@property(readonly) Class superclass;

@end
