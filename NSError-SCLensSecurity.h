//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (SCLensSecurity)
+ (id)sc_lensSignatureValidationFailedErrorWithContentId:(id)arg1 targetHash:(id)arg2 contentHash:(id)arg3 contentSignature:(id)arg4;
+ (id)sc_lensSignatureValidationFailedErrorWithOptionalContentPath:(id)arg1;
+ (id)sc_lensSignatureValidationHashCheckingFailedErrorWithOptionalContentPath:(id)arg1 targetHash:(id)arg2 contentHash:(id)arg3;
+ (id)sc_lensSignatureValidationResourceTypeMismatchErrorWithResource:(id)arg1 destinationType:(long long)arg2;
+ (id)sc_lensSignatureValidationUnknownResourceTypeErrorWithResource:(id)arg1 destinationType:(long long)arg2 contentPath:(id)arg3;
@end

