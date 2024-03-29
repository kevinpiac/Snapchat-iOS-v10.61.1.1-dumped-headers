//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"
#import "SCOperaSession-Protocol.h"

@class NSString, SCImpalaShowProfilePresenter, SCImpalaShowProfilePresenterOperaDelegate, SCOperaEventListenerAnnouncer, SCOperaViewController, SCUserSession;
@protocol NavigationDelegate, SCOperaPlaylistItemController;

@interface SCLongformShowOperaSession : NSObject <SCOperaPlaylistItemExtraPropertiesProvider, SCOperaSession>
{
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    SCImpalaShowProfilePresenter *_showProfilePresenter;
    SCImpalaShowProfilePresenterOperaDelegate *_showProfilePresenterDelegate;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    SCOperaViewController *_operaViewController;
    id <SCOperaPlaylistItemController> _playlistItemController;
}

- (void).cxx_destruct;
- (void)_displayShowProfile:(id)arg1 context:(id)arg2;
- (void)_sendShowProfile:(id)arg1;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;
@property(nonatomic) __weak SCOperaViewController *operaViewController; // @synthesize operaViewController=_operaViewController;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
@property(nonatomic) __weak id <SCOperaPlaylistItemController> playlistItemController; // @synthesize playlistItemController=_playlistItemController;
- (id)registeredEventsForOperaSession;
- (void)setEventAnnouncer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

