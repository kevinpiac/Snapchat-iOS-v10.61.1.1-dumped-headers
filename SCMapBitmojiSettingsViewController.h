//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBitmojiSettingsViewController.h"

#import "SCMapModalViewControllerSubclass-Protocol.h"

@class NSString, SCMapModalViewController;

@interface SCMapBitmojiSettingsViewController : SCBitmojiSettingsViewController <SCMapModalViewControllerSubclass>
{
    SCMapModalViewController *_parentModalViewController;
}

- (void).cxx_destruct;
- (id)initWithPage:(unsigned long long)arg1 status:(unsigned long long)arg2 userSession:(id)arg3;
@property(nonatomic) __weak SCMapModalViewController *parentModalViewController; // @synthesize parentModalViewController=_parentModalViewController;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

