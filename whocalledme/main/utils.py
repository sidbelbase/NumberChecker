from whocalledme import *
from whocalledme.models import Extension, Company
from flask import render_template, url_for, flash, redirect, request, abort, Blueprint

def try_searching(query, stripped_number):
    result = Extension.query.whooshee_search(stripped_number, order_by_relevance=-1).first()
    return render_template('result.html', query=query, result=result)