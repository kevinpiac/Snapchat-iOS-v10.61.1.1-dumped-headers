//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNShimsLogger-Protocol.h"

@interface SCNShimsLoggerCppProxy : NSObject <SCNShimsLogger>
{
    struct Handle<std::__1::shared_ptr<snap::shims::Logger>, std::__1::shared_ptr<snap::shims::Logger>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_00467bdd *)arg1;
- (void)log:(long long)arg1 context:(long long)arg2 tag:(id)arg3 message:(id)arg4;
- (void)logTimedEvent:(id)arg1 interval:(long long)arg2 params:(id)arg3;

@end

