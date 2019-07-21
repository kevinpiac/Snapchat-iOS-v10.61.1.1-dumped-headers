//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSNumber;

@protocol SCDateTimeControlling <NSObject, SCComposerJsConvertible>
- (void)openDatePickerWithCallback:(void (^)(double, double, double))arg1 year:(NSNumber *)arg2 month:(NSNumber *)arg3 day:(NSNumber *)arg4;
- (void)openTimePickerWithCallback:(void (^)(double, double))arg1 hour:(NSNumber *)arg2 minute:(NSNumber *)arg3;
@end
