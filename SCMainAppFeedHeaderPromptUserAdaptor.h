//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeedHeaderPromptUserAdaptor-Protocol.h"

@class User;

@interface SCMainAppFeedHeaderPromptUserAdaptor : NSObject <SCFeedHeaderPromptUserAdaptor>
{
    User *_user;
}

- (void).cxx_destruct;
- (id)birthday;
- (_Bool)hasVerifiedNumber;
- (id)initWithUser:(id)arg1;
- (_Bool)isEmailVerified;
- (_Bool)isPhoneConfirmed;

@end
