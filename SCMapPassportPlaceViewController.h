//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCComposerViewOwner-Protocol.h"
#import "SCMapModalViewControllerSubclass-Protocol.h"
#import "SCMapPassportPlaceContext-Protocol.h"

@class NSArray, NSString, SCMapModalViewController, SCMapPassportPlaceView;
@protocol SCMapPassportContextSessionProvider;

@interface SCMapPassportPlaceViewController : UIViewController <SCComposerViewOwner, SCMapPassportPlaceContext, SCMapModalViewControllerSubclass>
{
    NSString *_venueId;
    NSString *_placeName;
    NSArray *_friendUserIds;
    id <SCMapPassportContextSessionProvider> _contextSessionProvider;
    SCMapPassportPlaceView *_placeView;
    long long _sourcePageType;
}

- (void).cxx_destruct;
- (id)composerWillCreateViewForClass:(Class)arg1 nodeId:(id)arg2;
- (void)didTapBack;
- (id)initWithContextSessionProvider:(id)arg1 friendUserIds:(id)arg2 placeName:(id)arg3 venueId:(id)arg4 sourcePageType:(long long)arg5;
- (_Bool)modalViewController:(id)arg1 panGestureRecognizer:(id)arg2 shouldBeginInView:(id)arg3;
- (void)modalViewControllerPanGestureRecognizerDidFinish:(id)arg1;
- (id)toJavaScript;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak SCMapModalViewController *parentModalViewController;
@property(readonly) Class superclass;

@end

