//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNFileManagerGetResult-Protocol.h"

@interface SCNFileManagerGetResultCppProxy : NSObject <SCNFileManagerGetResult>
{
    struct Handle<std::__1::shared_ptr<snap::file_manager::GetResult>, std::__1::shared_ptr<snap::file_manager::GetResult>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getData;
- (long long)getError;
- (id)initWithCpp:(const shared_ptr_82d95599 *)arg1;

@end

