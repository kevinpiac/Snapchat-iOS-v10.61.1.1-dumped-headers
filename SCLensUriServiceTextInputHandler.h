//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensTextInputProvider-Protocol.h"
#import "SCLensUriServiceProviderRouteHandler-Protocol.h"

@class LSATextInputController, NSString, UIView;

@interface SCLensUriServiceTextInputHandler : NSObject <SCLensUriServiceProviderRouteHandler, SCLensTextInputProvider>
{
    UIView *_parentView;
    LSATextInputController *_textInputController;
}

- (void).cxx_destruct;
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideKeyboard;
- (id)initWithParentView:(id)arg1;
- (void)resetTextInput;
@property(retain, nonatomic) LSATextInputController *textInputController; // @synthesize textInputController=_textInputController;
- (void)turnOff;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

