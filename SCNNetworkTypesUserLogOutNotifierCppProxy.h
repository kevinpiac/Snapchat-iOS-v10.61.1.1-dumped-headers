//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkTypesUserLogOutNotifier-Protocol.h"

@interface SCNNetworkTypesUserLogOutNotifierCppProxy : NSObject <SCNNetworkTypesUserLogOutNotifier>
{
    struct Handle<std::__1::shared_ptr<snap::network_types::UserLogOutNotifier>, std::__1::shared_ptr<snap::network_types::UserLogOutNotifier>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_d7aa1617 *)arg1;
- (void)notifyListener;
- (void)registerListener:(id)arg1;

@end

