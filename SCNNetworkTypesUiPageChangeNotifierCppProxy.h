//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkTypesUiPageChangeNotifier-Protocol.h"

@interface SCNNetworkTypesUiPageChangeNotifierCppProxy : NSObject <SCNNetworkTypesUiPageChangeNotifier>
{
    struct Handle<std::__1::shared_ptr<snap::network_types::UiPageChangeNotifier>, std::__1::shared_ptr<snap::network_types::UiPageChangeNotifier>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_6feb1090 *)arg1;
- (void)notifyListener:(id)arg1;
- (id)registerListener:(id)arg1;

@end

