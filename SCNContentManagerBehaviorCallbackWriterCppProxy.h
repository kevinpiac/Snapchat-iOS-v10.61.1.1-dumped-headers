//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNContentManagerBehaviorCallbackWriter-Protocol.h"

@interface SCNContentManagerBehaviorCallbackWriterCppProxy : NSObject <SCNContentManagerBehaviorCallbackWriter>
{
    struct Handle<std::__1::shared_ptr<snap::content_manager::BehaviorCallbackWriter>, std::__1::shared_ptr<snap::content_manager::BehaviorCallbackWriter>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_0ee39352 *)arg1;
- (void)putBytes:(long long)arg1 dataBytes:(id)arg2 objectName:(id)arg3;

@end

