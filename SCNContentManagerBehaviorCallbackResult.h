//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNContentManagerBehaviorCallbackResult : NSObject
{
    _Bool _success;
    long long _error;
}

+ (id)BehaviorCallbackResultWithSuccess:(_Bool)arg1 error:(long long)arg2;
- (id)description;
@property(readonly, nonatomic) long long error; // @synthesize error=_error;
- (id)initWithSuccess:(_Bool)arg1 error:(long long)arg2;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;

@end
