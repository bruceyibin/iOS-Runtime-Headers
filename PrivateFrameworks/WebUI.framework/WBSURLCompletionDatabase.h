/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSURLCompletionDatabase : NSObject {
    struct unique_ptr<SafariShared::URLCompletionDatabase, std::__1::default_delete<SafariShared::URLCompletionDatabase> > { 
        struct __compressed_pair<SafariShared::URLCompletionDatabase *, std::__1::default_delete<SafariShared::URLCompletionDatabase> > { 
            struct URLCompletionDatabase {} *__first_; 
        } __ptr_; 
    } _completionDatabase;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearBookmarkMatchesCaches;
- (void)clearBookmarkMatchesCachesKeepingEmptyValues:(BOOL)arg1;
- (void)clearMatchesCaches;
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 withBlock:(id /* block */)arg2;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2;
- (void)getBestMatchesForTypedString:(id)arg1 topHits:(id*)arg2 matches:(id*)arg3 limit:(unsigned int)arg4;
- (id)init;

@end
