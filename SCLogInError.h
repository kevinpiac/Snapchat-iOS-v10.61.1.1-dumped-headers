//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCLogInError : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_abuseWarningError_abuseWarningId;
    NSString *_abuseWarningError_abuseWarningMessage;
    NSString *_credentialsMismatchError_message;
    NSString *_invalidODLVPreAuthTokenError_message;
    NSString *_generalError_message;
}

+ (id)abuseWarningErrorWithAbuseWarningId:(id)arg1 abuseWarningMessage:(id)arg2;
+ (id)connectionError;
+ (id)credentialsMismatchErrorWithMessage:(id)arg1;
+ (id)generalErrorWithMessage:(id)arg1;
+ (id)invalidODLVPreAuthTokenErrorWithMessage:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchAbuseWarningError:(CDUnknownBlockType)arg1 credentialsMismatchError:(CDUnknownBlockType)arg2 invalidODLVPreAuthTokenError:(CDUnknownBlockType)arg3 connectionError:(CDUnknownBlockType)arg4 generalError:(CDUnknownBlockType)arg5;

@end
